#include "mbed.h"


ThisThread::sleep_for(100ms)

DigitalOut dout(D1):
	dout = 1	
	dout.wrte(1)
	dout.read()	
	(uint8_t)dout
	dout.is_connected()

BusOut bout(pin1(LSB), pin2, ... , pin8(MSB)):
	bout = 0x36

DigitalIn din(USER_BUTTON):
	din.is_connected()
	din.mode(PUllNone)
	din.read()
	char c = din

AnalogOut aout(D7):
	aout = 0.3
	aout.write_u16(65535)

PwmOut pout(LED1):
	pout.period_ms(5)
	pout = 0.5
	pout.write(0.5)
	pout.read()

AnalogIn ain(A0):
	char c = ain

uLCD_4DGL uLCD(D1, D0, D2):
	git clone https://gitlab.larc-nthu.net/ee2405_2021/4dgl-ulcd-se.git
	rm -rf ./4dgl-ulcd-se/.git
	#include "uLCD_4DGL.h"
	uLCD.printf("\nHello uLCD World\n")
	uLCD.cls()
	uLCD.reset()
	uLCD.background_color(int color)
	uLCD.locate(char col, char row)
	uLCD.set_font(char mode)
	uLCD.text_width(4)
	uLCD.text_height(4)
	uLCD.color(RED)

InterruptIn button(USER_BUTTON):
	button.rise(&func_name)

Timer t:
	using namespace std::chrono
	t.start()
	t.stop()
	t.reset()
	chrono::duration_cast<chrono::seconds>(t.elapsed_time()).count()
	chrono::duration_cast<chrono::milliseconds>(t.elapsed_time()).count()
	t.elapsed_time().count()
	
Timeout tout:
	using namespace std::chrono
	tout.attach(&func_name, 2s)
	tout.attach_us(&func_name, 300)

Ticker tout_period:
	using namespace std::chrono
	tout_period.attach(&func_name, 2s)


	
