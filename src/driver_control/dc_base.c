void dc_base_gyro_reset() {

    dc_lcd_gyro_reset();
    SensorType[GYRO_PORT] = sensorNone;
    sleep(2000);
    SensorType[GYRO_PORT] = sensorGyro;
    sleep(2000);
    dc_lcd_init();

}

void dc_base() {

    static int prev = vexRT[Btn8D];

    // for debug only, because static variables
    // in functions show up as 'global' variables
    static int raw_gyro;

    if (!prev && vexRT[Btn8D]) {
        dc_base_gyro_reset();
    }

    if (dc_base_mode) {

#define str(ch) (abs(vexRT[ch]) < 10 ? 0 : vexRT[ch])

        int x = str(Ch4),
            y = str(Ch3),
            r = vexRT[Ch1] / 2;

#undef str

	    if (dc_base_mode == DC_BASE_MODE_GYRO) {

		    /* int */ raw_gyro = SensorValue[GYRO_PORT] / 10;
		    if (raw_gyro < 0) raw_gyro += 360;

		    float rad_gyro = degreesToRadians(raw_gyro);

		    float temp = y * cos(rad_gyro) - x * sin(rad_gyro);
	        x    = y * sin(rad_gyro) + x * cos(rad_gyro);
	        y    = temp;

	    }

	    motor[FL] = + y + x + r;
	    motor[FR] = + y - x - r;
	    motor[BR] = + y + x - r;
	    motor[BL] = + y - x + r;

    }

    prev = vexRT[Btn8D];

}

void dc_base_mode_next() {

    motor[FL] = motor[FR] = motor[BR] = motor[BL] = 0;
	dc_base_mode++;
	if (dc_base_mode == DC_BASE_MODE_OVER)
	    dc_base_mode = DC_BASE_MODE_OFF;

}
