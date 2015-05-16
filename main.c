/*
	Veronique: an emulator for Quinn Dunki's Veronica 6502 computer
    Copyright (C) 2015 sirwinstoncat5 (GitHub username)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "lib6502-1.3/lib6502.h"

char* version="v0.0.1";

main()
{
	printf("Veronique %s (c) 2015 sirwinstoncat5\n", version);
	VeroGFXInit();
	M6502 *cpu=M6502_new(0, 0, 0);
	
	
	
	VeroGFXQuit();
}
