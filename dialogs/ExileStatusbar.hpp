#define ST_RIGHT 0x01
class StatusBarExile {
	idd = -1;
	onLoad = "uiNamespace setVariable ['StatusBarExile', _this select 0]";
	onUnload = "uiNamespace setVariable ['StatusBarExile', objNull]";
	onDestroy = "uiNamespace setVariable ['StatusBarExile', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	objects[] = {};
	class controlsBackground
    {
        class statusBarImage
        {
			idc = 55557;
            type = 0;
            style = 48;
			x = 0.15 * safezoneW + safezoneX;
			y = 0.925 * safezoneH + safezoneY;
			w = 0.7 * safezoneW;
			h = 0.1;
            colorText[] = {1, 1, 1, 1};
            colorBackground[]={0,0,0,0};
            sizeEx = 0.4;
            font = "OrbitronMedium";
            text = "icons\background.paa"; // Picture wanted for background.
        };
    };
	class controls 
	{
		class statusBarText {
			idc = 55554;
			//x = safeZoneX + 0.07;//safeZoneW*0.01;
			//y = safezoneY + safezoneH - 0.11;
			//w = 1.5;
			//h = 0.1;
			x = 0.15 * safezoneW + safezoneX;
			y = 0.93 * safezoneH + safezoneY;
			w = 0.7 * safezoneW;
			h = 0.1;
			sizeEx = 0.4;
			shadow = 2;
			colorBackground[] = { 0, 0, 0, 0 };  // uncomment and increase 4th number to have a background
			font = "PuristaSemibold";
			size = 0.04;
			type = 13;
			style = 2;
			text="";
			class Attributes {
				align="left";
				color = "#ffffff";//#5fe60c
			};
		};
	};
};  
 
class osefStatusBar {
	idd = -1;
	onLoad = "uiNamespace setVariable ['osefStatusBar', _this select 0]";
	onUnload = "uiNamespace setVariable ['osefStatusBar', objNull]";
	onDestroy = "uiNamespace setVariable ['osefStatusBar', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 55554;
			//x = safeZoneX + 0.07;//safeZoneW*0.01;
			//y = safezoneY + safezoneH - 0.11;
			//w = 1.5;
			//h = 0.1;
			
			x = 0.185 * safezoneW + safezoneX;
			y = 0.940044 * safezoneH + safezoneY;
			w = 0.65 * safezoneW;
			h = 0.0330033 * safezoneH;
			sizeEx = 0.4;
			
			shadow = 2;
			colorBackground[] = { 0, 0, 0, 0 };  // uncomment and increase 4th number to have a background
			font = "PuristaSemibold";
			size = 0.04;
			type = 13;
			style = 2;
			text="";
			class Attributes {
				align="left";
				color = "#ffffff";//#5fe60c
			};
		};
	};
};