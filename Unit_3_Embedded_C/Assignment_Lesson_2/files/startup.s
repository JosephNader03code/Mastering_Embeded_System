@@Eng.Joseph Nader (learn-in-depth.com)
.global reset
reset:
	ldr sp, =stack_top
	bl main
stop:	b stop