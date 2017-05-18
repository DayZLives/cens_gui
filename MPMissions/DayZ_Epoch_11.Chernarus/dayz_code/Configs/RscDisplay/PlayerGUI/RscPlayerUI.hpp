class RscTitles {
  // =========================================================================
  // LOGO WATERMARK
  // =========================================================================
  class wm_disp {
    idd = -1;
    onLoad = "uiNamespace setVariable ['wm_disp', _this select 0]";
    fadein = 0;
    fadeout = 0;
    duration = 10e10;
    controlsBackground[] = {};
    objects[] = {};
    class controls {
      class wm_text2 {
        idc = 1;
        x = safeZoneX+0.012;
        y = safeZoneY+safeZoneH-0.1;
        w = 1.151*safeZoneH;
        h = 0.057*safeZoneH;
        shadow = 2;
        class Attributes
        {
          font = "EtelkaNarrowMediumPro";
          color = "#80FFFFFF";
          align = "left";
          valign = "bottom";
          shadow = 2;
        };
        colorBackground[] = { 1, 0.3, 0, 0 };
        font = "EtelkaNarrowMediumPro";
        size = 0.04*safeZoneH;
        type = 13;
        style = 0;
        text="";
      };
    };
  };
  // =========================================================================
  // PLAYER GUI
  // =========================================================================
  class playerStatusGUI
  {
    idd = 6900;
    movingEnable = 0;
    duration = 100000;
    name = "statusBorder";
    onLoad = "uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
    class ControlsBackground
    {
      class RscPicture_1901: RscPictureGUI
      {
        idc = 1901;
        text = "\z\addons\dayz_code\gui\status\status_bg.paa";
        x = 0.905 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY;//2
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1201: RscPictureGUI
      {
        idc = 1201;
        text = "\z\addons\dayz_code\gui\status\status_food_border_ca.paa";
        x = 0.905 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY;//2
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1900: RscPictureGUI
      {
        idc = 1900;
        text = "\z\addons\dayz_code\gui\status\status_bg.paa";
        x = 0.875 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY; //3
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1200: RscPictureGUI
      {
        idc = 1200;
        text = "\z\addons\dayz_code\gui\status\status_blood_border_ca.paa";
        x = 0.875 * safezoneW + safezoneX;
        y = 0.93* safezoneH + safezoneY; //3
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1902: RscPictureGUI
      {
        idc = 1902;
        text = "\z\addons\dayz_code\gui\status\status_bg.paa";
        x = 0.935 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY; //1
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1202: RscPictureGUI
      {
        idc = 1202;
        text = "\z\addons\dayz_code\gui\status\status_thirst_border_ca.paa";
        x = 0.935 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY; //1
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1908: RscPictureGUI
      {
        idc = 1908;
        text = "\z\addons\dayz_code\gui\status\status_bg.paa";
        x = 0.845 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY; //3
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1208: RscPictureGUI
      {
        idc = 1208;
        text = "\z\addons\dayz_code\gui\status\status_temp_outside_ca.paa";
        x = 0.845 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY; //3
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1203: RscPictureGUI
      {
        idc = 1203;
        text = "\z\addons\dayz_code\gui\status\status_effect_brokenleg.paa";
        x = 0.810 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
        colorText[] = {1,1,1,1};
      };
      class RscPicture_1205: RscPictureGUI
      {
        idc = 1205;
        text = "\z\addons\dayz_code\gui\status\status_bg.paa";
        x = 0.960 * safezoneW + safezoneX;
        y = 0.825 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1206: RscPictureGUI
      {
        idc = 1206;
        text = "\z\addons\dayz_code\gui\status\status_bg.paa";
        x = 0.960 * safezoneW + safezoneX;
        y = 0.875 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1307: RscPictureGUI
      {
        idc = 1307;
        text = "DAYZ_CODE\gui\status\st_humanity_survivor.paa";
        x = 0.670 * safezoneW + safezoneX;
        y = 0.933 * safezoneH + safezoneY;
        w = 0.027 * safezoneW;
        h = 0.037 * safezoneH;
        colorText[] = {1,1,1,1};
      };
      class RscPicture_1309: RscPictureGUI
      {
        idc = 1309;
        text = "DAYZ_CODE\gui\status\st_humanity_bandit.paa";
        x = 0.713 * safezoneW + safezoneX;
        y = 0.933 * safezoneH + safezoneY;
        w = 0.027 * safezoneW;
        h = 0.037 * safezoneH;
        colorText[] = {1,1,1,1};
      };
      class RscPicture_1310: RscPictureGUI
      {
        idc = 1310;
        text = "DAYZ_CODE\gui\status\st_zombie.paa";
        x = 0.756 * safezoneW + safezoneX;
        y = 0.933 * safezoneH + safezoneY;
        w = 0.027 * safezoneW;
        h = 0.037 * safezoneH;
        colorText[] = {1,1,1,1};
      };
    };
    class Controls
    {
      class RscPicture_1301: RscPictureGUI
      {
        idc = 1301;
        //text = "IMG\gui\status\status_food_inside_ca.paa";
        x = 0.905 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1300: RscPictureGUI
      {
        idc = 1300;
        //text = "IMG\gui\status\status_blood_inside_ca.paa";
        x = 0.875 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1302: RscPictureGUI
      {
        idc = 1302;
        //text = "IMG\gui\status\status_thirst_inside_ca.paa";
        x = 0.935 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1306: RscPictureGUI
      {
        idc = 1306;
        //text = "IMG\gui\status\status_temp_ca.paa";
        x = 0.845 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1303: RscPictureGUI
      {
        idc = 1303;
        text = "\z\addons\dayz_code\gui\status\status_bleeding_ca.paa";
        x = 0.875 * safezoneW + safezoneX;
        y = 0.93 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
        colorText[] = {1,1,1,0.5};
      };
      class RscPicture_1304: RscPictureGUI
      {
        idc = 1304;
        text = "\z\addons\dayz_code\gui\status\status_noise.paa";
        x = 0.960 * safezoneW + safezoneX;
        y = 0.825 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
      };
      class RscPicture_1305: RscPictureGUI
      {
        idc = 1305;
        text = "\z\addons\dayz_code\gui\status\status_visible.paa";
        x = 0.960 * safezoneW + safezoneX;
        y = 0.875 * safezoneH + safezoneY;
        w = 0.075;
        h = 0.10;
      };
      class RscText_1400: RscTextGUIK
      {
        idc = 1400;
        text = "1000";
        x = 0.683 * safezoneW + safezoneX;
        y = 0.931 * safezoneH + safezoneY;
        w = 0.037 * safezoneW;
        h = 0.047 * safezoneH;
        colorText[] = {1,1,1,1};
        size = 0.03;
        sizeEx = 0.03;
      };
      class RscText_1402: RscTextGUIK
      {
        idc = 1402;
        text = "1000";
        x = 0.726 * safezoneW + safezoneX;
        y = 0.931 * safezoneH + safezoneY;
        w = 0.037 * safezoneW;
        h = 0.047 * safezoneH;
        colorText[] = {1,1,1,1};
        size = 0.03;
        sizeEx = 0.03;
      };
      class RscText_1403: RscTextGUIK
      {
        idc = 1403;
        text = "1000";
        x = 0.769 * safezoneW + safezoneX;
        y = 0.931 * safezoneH + safezoneY;
        w = 0.037 * safezoneW;
        h = 0.047 * safezoneH;
        colorText[] = {1,1,1,1};
        size = 0.03;
        sizeEx = 0.03;
      };
      class RscText_1420: RscTextGUIK
      {
        idc = 1420;
        text = "1000";
        x = 0.915 * safezoneW + safezoneX;
        y = 0.842 * safezoneH + safezoneY;
        w = 0.040 * safezoneW;
        h = 0.047 * safezoneH;
        colorText[] = {1,0,0,1};
        size = 0.03;
        sizeEx = 0.03;
      };
      class RscText_1421: RscTextGUIK
      {
        idc = 1421;
        text = "1000";
        x = 0.915 * safezoneW + safezoneX;
        y = 0.862 * safezoneH + safezoneY;
        w = 0.040 * safezoneW;
        h = 0.047 * safezoneH;
        colorText[] = {1,1,1,1};
        size = 0.03;
        sizeEx = 0.03;
      };
      class RscText_1423: RscTextGUIK
      {
        idc = 1423;
        text = "Blood:";
        x = 0.845 * safezoneW + safezoneX;
        y = 0.842 * safezoneH + safezoneY;
        w = 0.08 * safezoneW;
        h = 0.047 * safezoneH;
        colorText[] = {1,1,1,1};
        size = 0.03;
        sizeEx = 0.03;
      };
      class RscText_1424: RscTextGUIK
      {
        idc = 1424;
        text = "Humanity:";
        x = 0.845 * safezoneW + safezoneX;
        y = 0.862 * safezoneH + safezoneY;
        w = 0.08 * safezoneW;
        h = 0.047 * safezoneH;
        colorText[] = {1,1,1,1};
        size = 0.03;
        sizeEx = 0.03;
      };
    };
  };
  // =========================================================================
  // WEAPON HUD
  // =========================================================================
  class weaponhud_2_bg {
    idd = 7202;
    movingenable = false;
    duration = 10e10;
    onLoad = "";
    class controls {
      class text_rifle_1: RLNT_RscText
      {
        idc = 1000;
        text = "1";
        x = 0.108258 * safezoneW + safezoneX;
        y = 0.939838 * safezoneH + safezoneY;
        w = 0.010309 * safezoneW;
        h = 0.0439838 * safezoneH;
        colorText[] = {255,255,255,1};
      };
      class text_rifle_2: RLNT_RscText
      {
        idc = 1001;
        text = "2";
        x = 0.200008 * safezoneW + safezoneX;
        y = 0.939838 * safezoneH + safezoneY;
        w = 0.010309 * safezoneW;
        h = 0.0439838 * safezoneH;
        colorText[] = {255,255,255,1};
      };
      class text_secondary: RLNT_RscText
      {
        idc = 1002;
        text = "3";
        x = 0.291758 * safezoneW + safezoneX;
        y = 0.939838 * safezoneH + safezoneY;
        w = 0.010309 * safezoneW;
        h = 0.0439838 * safezoneH;
        colorText[] = {255,255,255,1};
      };
      class text_painkiller: RLNT_RscText
      {
        idc = 1003;
        text = "4";
        x = 0.361859 * safezoneW + safezoneX;
        y = 0.939838 * safezoneH + safezoneY;
        w = 0.010309 * safezoneW;
        h = 0.0439838 * safezoneH;
        colorText[] = {255,255,255,1};
      };
      class text_bandage: RLNT_RscText
      {
        idc = 1004;
        text = "5";
        x = 0.431961 * safezoneW + safezoneX;
        y = 0.939838 * safezoneH + safezoneY;
        w = 0.010309 * safezoneW;
        h = 0.0439838 * safezoneH;
        colorText[] = {255,255,255,1};
      };
      class bg_rifle_1: RLNT_RscText
      {
        idc = 1005;
        x = 0.108258 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0876266 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
      class bg_rifle_2: RLNT_RscText
      {
        idc = 1006;
        x = 0.200008 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0876266 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
      class bg_secondary: RLNT_RscText
      {
        idc = 1007;
        x = 0.291758 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0670085 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
      class bg_painkiller: RLNT_RscText
      {
        idc = 1008;
        x = 0.361859 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0670085 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
      class bg_bandage: RLNT_RscText
      {
        idc = 1009;
        x = 0.43196 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0670085 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
      class frame_rifle_1: RLNT_RscText
      {
        idc = 1010;
        x = 0.118567 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0773175 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
      class frame_rifle_2: RLNT_RscText
      {
        idc = 1011;
        x = 0.211348 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0773175 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
      class frame_secondary: RLNT_RscText
      {
        idc = 1012;
        x = 0.302067 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0566995 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
      class frame_painkiller: RLNT_RscText
      {
        idc = 1013;
        x = 0.372168 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0566995 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
      class frame_bandage: RLNT_RscText
      {
        idc = 1014;
        x = 0.442269 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0566995 * safezoneW;
        h = 0.0659757 * safezoneH;
        colorBackground[] = {0,0,0,0.4};
      };
    };
  };
  class weaponhud_2_items {
    idd = 7203;
    movingenable = false;
    duration = 10e10;
    onLoad = "uiNamespace setVariable ['weaponhud_2_items', _this select 0]; [] spawn fnc_hud_updateImages;";
    class controls {
      class img_rifle_1: RLNT_RscPicture
      {
        idc = 1200;
        text = "#(argb,8,8,3)color(0,0,0,0)";
        x = 0.118567 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0773175 * safezoneW;
        h = 0.0659757 * safezoneH;
      };
      class img_rifle_2: RLNT_RscPicture
      {
        idc = 1201;
        text = "#(argb,8,8,3)color(0,0,0,0)";
        x = 0.211348 * safezoneW + safezoneX;
        y = 0.928842 * safezoneH + safezoneY;
        w = 0.0773175 * safezoneW;
        h = 0.0659757 * safezoneH;
      };
      class img_secondary: RLNT_RscPicture
      {
        idc = 1202;
        text = "#(argb,8,8,3)color(0,0,0,0)";
        x = 0.302067 * safezoneW + safezoneX;
        y = 0.928841 * safezoneH + safezoneY;
        w = 0.0566995 * safezoneW;
        h = 0.0659757 * safezoneH;
      };
      class img_painkiller: RLNT_RscPicture
      {
        idc = 1203;
        text = "#(argb,8,8,3)color(0,0,0,0)";
        x = 0.377323 * safezoneW + safezoneX;
        y = 0.93544 * safezoneH + safezoneY;
        w = 0.0463905 * safezoneW;
        h = 0.0549797 * safezoneH;
      };
      class img_bandage: RLNT_RscPicture
      {
        idc = 1204;
        text = "#(argb,8,8,3)color(0,0,0,0)";
        x = 0.447424 * safezoneW + safezoneX;
        y = 0.935439 * safezoneH + safezoneY;
        w = 0.0463905 * safezoneW;
        h = 0.0549797 * safezoneH;
      };
    };
  };
};
