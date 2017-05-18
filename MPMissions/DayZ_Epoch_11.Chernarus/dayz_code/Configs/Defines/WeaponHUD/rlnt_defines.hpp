/*		RLNT BASE CLASSES		*/
class RLNT_RscText
{
    access = 0;
    idc = -1;
    type = CT_STATIC;
    style = 0;
    linespacing = 1;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,.5};
    text = "";
    shadow = 0;
    font = "Bitstream";
    SizeEx = 0.02300;
    fixedWidth = 0;
    x = 0;
    y = 0;
    h = 0;
    w = 0;
};

class RLNT_RscPicture
{
    access = 0;
    idc = -1;
    type = CT_STATIC;
    style = ST_PICTURE;
    colorBackground[] = {0,0,0,0};
    colorText[] = {1,1,1,1};
    font = "Bitstream";
    sizeEx = 0;
    lineSpacing = 0;
    text = "";
    fixedWidth = 0;
    shadow = 0;
    x = 0;
    y = 0;
    w = 0.2;
    h = 0.15;
};
