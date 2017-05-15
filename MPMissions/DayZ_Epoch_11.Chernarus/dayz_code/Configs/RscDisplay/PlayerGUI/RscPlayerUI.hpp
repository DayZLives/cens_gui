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
};
