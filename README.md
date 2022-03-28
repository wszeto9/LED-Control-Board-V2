# LED-Control-Board-V2
Version 2 of a easy-to-deploy, low-cost PCBA to control LED lights over Wi-Fi. Designed for use at MIT's East Campus REX event to light up large forts and structures at distances of over 30 ft.

<h2> Features:</h2>
<ul>
<li>Costs under $10 per Control board </li>
<li>USB-C PD/QC input (12V) for analog RGB strips</li>
<li>USB-C input (5V) for addressible RGB strips</li>
<li>Intended to be used with 12V/1.5A (18W) USB-C` power banks for portability</li>
<li>Panelized in a 4x2 panel of 100x100mm for minimal fabrication costs at JLCPCB</li>
<li>Individual PCBs are designed to be small and not noticible in deployment</li>
<li>Auto-reset circuit for ESP8266 reduces the equipment needed to program boards</li>
<li>Exposed breakout headers allows customization of voltages that are used</li>
<li>LEDs to debug circuits </li>
<li>Programming side (Right) can be cut off and seperated from controller side (Left) to reduce the chips needed to program boards to further reduce cost</li>
</ul>

![Pinout](breakout_boards/documentation/pinout_config-01.jpg)
Pinout

![LED Inducators](breakout_boards/documentation/pinout_config-02.jpg)
LED Indicators

![Top_unpopulated](breakout_boards/documentation/ISO_board.png)
Populated Board
