/*  INFO
*   name: IVERA_interface_window
*   version: 15
*/
//#include <windows.h>

1 ICON "Icon48.ico"

DLG_MAIN DIALOG 0, 0, 395, 280
STYLE DS_MODALFRAME | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU
CAPTION "IVERA_interface"
LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US
FONT 8, "MS Sans Serif"
{                                                                                                           // 	x,    y,    length, hight
   CONTROL "", ID_STATUS_MAIN, "msctls_statusbar32", SBARS_SIZEGRIP | WS_CHILD | WS_VISIBLE, 				    180,  300,   60,    12
   CONTROL "Reply (VRI)", 0, "BUTTON", BS_GROUPBOX | WS_CHILD | WS_VISIBLE, 							       	  5,    5,  255,   200
   CONTROL "", ID_EDIT_DATA, "EDIT", ES_LEFT | ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP,	 10,   15,  245,   185
   CONTROL "Manual input", 0, "BUTTON", BS_GROUPBOX | WS_CHILD | WS_VISIBLE, 							       	  5,  210,  255,    25
   CONTROL "", ID_EDIT_SEND, "EDIT", ES_LEFT | ES_MULTILINE | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP,	 10,  220,  245,    12
   CONTROL "&About", ID_BTN_ABOUT, "BUTTON", BS_TEXT | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 		 	   			330,  240,   60,    12
   CONTROL "&Close", ID_BTN_CLOSE, "BUTTON", BS_TEXT | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 		 	   			330,  255,   60,    12

   CONTROL "&Connect", ID_BTN_CONNECT, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 		   	  5,  240,   60,    12
   CONTROL "&Disconnect", ID_BTN_CLEAR, "BUTTON",BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP,		      5,  255,   60,    12
   CONTROL "&Send", ID_BTN_SEND, "BUTTON", BS_DEFPUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 		 	    265,  220,   60,    12

   CONTROL "&Autbedr", ID_BTN_AUTBED, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 135,  240,   60,    12
   CONTROL "&TKL", ID_BTN_TKL, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 		 135,  255,   60,    12
   CONTROL "&Verst1", ID_BTN_VERST1, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			   	 330,   10,   60,    12
   CONTROL "&Verst2", ID_BTN_VERST2, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			   	 330,   25,   60,    12
   CONTROL "&Verst3", ID_BTN_VERST3, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			   	 330,   40,   60,    12
   CONTROL "&Verst4", ID_BTN_VERST4, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			   	 330,   55,   60,    12
   CONTROL "&Verst5", ID_BTN_VERST5, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 	 330,   70,   60,    12
   CONTROL "&Verst6", ID_BTN_VERST6, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 	 330,   85,   60,    12
   CONTROL "&Verst7", ID_BTN_VERST7, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 	 330,   100,  60,   12
   CONTROL "&Verst8", ID_BTN_VERST8, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 	 330,   115,  60,    12
   CONTROL "&Verst9", ID_BTN_VERST9, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 	 330,   130,  60,    12
   CONTROL "&Verst10", ID_BTN_VERST10, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 330,   145,  60,    12
   CONTROL "&Verst15", ID_BTN_VERST15, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 330,   160,  60,    12
   CONTROL "&Prg01", ID_BTN_Prg01, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			     265,    10,  60,    12
   CONTROL "&Prg02", ID_BTN_Prg02, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			     265,    25,  60,    12
   CONTROL "&Prg03", ID_BTN_Prg03, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			     265,    40,  60,    12
   CONTROL "&Prg04", ID_BTN_Prg04, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			     265,    55,  60,    12

   CONTROL "&Alles Rood", ID_BTN_ROOD, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			 200,   240,  60,    12
   CONTROL "&GEKN", ID_BTN_GEKN, "BUTTON", BS_PUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 			    	 200,   255,  60,    12


}

DLG_CONNECT DIALOG 100, 100, 291, 83
STYLE DS_MODALFRAME | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU
CAPTION "Connect to VRI..."
LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US
FONT 8, "MS Sans Serif"
{
   CONTROL "", 0, "BUTTON", 0x50000007, 3, 1, 284, 79
   CONTROL "192.168.224.105", ID_EDIT_HOST, "EDIT", 0x50810000, 69, 28, 145, 14
   CONTROL "IP address:", 0, "STATIC", 0x50020000, 9, 34, 53, 10
//   CONTROL "Port Number:", 0, "STATIC", SS_LEFT | WS_CHILD | WS_VISIBLE | WS_GROUP, 10, 49, 50, 10
//   CONTROL "5000", ID_EDIT_PORT, "EDIT", ES_LEFT | ES_NUMBER | WS_CHILD | WS_VISIBLE | WS_BORDER | WS_TABSTOP, 69, 45, 60, 14
   CONTROL "&Go", ID_BTN_GO, "BUTTON", BS_DEFPUSHBUTTON | WS_CHILD | WS_VISIBLE | WS_TABSTOP, 220, 29, 60, 14
}

DLG_STATUS DIALOG 100, 100, 100, 50
STYLE DS_MODALFRAME | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU
CAPTION "About"
LANGUAGE LANG_ENGLISH, SUBLANG_ENGLISH_US
FONT 8, "MS Sans Serif"
{
}