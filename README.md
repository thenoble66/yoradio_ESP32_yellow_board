# yoradio_ESP32_yellow_board

* I will add only some specific info on ESP32 yellow development board: https://www.aliexpress.com/item/1005006653551815.html?spm=a2g0o.home.pcJustForYou.13.215276dbmDDCS0&gps-id=pcJustForYou&scm=1007.13562.416251.0&scm_id=1007.13562.416251.0&scm-url=1007.13562.416251.0&pvid=91e9b64f-3850-4da2-ac12-48f538ab162d&_t=gps-id:pcJustForYou,scm-url:1007.13562.416251.0,pvid:91e9b64f-3850-4da2-ac12-48f538ab162d,tpp_buckets:668%232846%238111%231996&pdp_ext_f=%7B%22order%22%3A%22-1%22%2C%22eval%22%3A%221%22%2C%22sceneId%22%3A%223562%22%7D&utparam-url=scene%3ApcJustForYou%7Cquery_from%3A or similar
* The build works in Arduino IDE 2.3.4 despite the description in the original README.md saying that 2.X.X is not supported
* The board manager shall use ESP32 Arduino board library version 2.0.17. It should look like this:
* ![image](https://github.com/user-attachments/assets/8a6473e0-5bdd-4f23-aed9-89168637360c)
* myoptions.h is taylored to the board in question.
* It uses HSPI for both the display and the touch panel management with different CS signals.
* It uses internal I2S and the built-in audio 4Ohm/3W amplifier.
* The user is able to make channel selection, volume change, start/stop audio right on the touch panel.
* If necessary, one single encoder can be configured (as commented out in myoptions.h) on 1.25mm JST connectors. Both remaining JST connectors are needed for this single encoder due to the strange pinout.
