void dc_dump() {

    // TODO: Check direction and change to U and D

	static int prev_l = 0, prev_r = 0;

    if (!prev_l && vexRT[Btn7L])
        dump_set(-127);
    if (!prev_r && vexRT[Btn7R])
        dump_set(127);
    if ((prev_l && !vexRT[Btn7L]) || (prev_r && !vexRT[Btn7R]))
       	dump_set(0);

    prev_l = vexRT[Btn7L];
    prev_r = vexRT[Btn7R];

}
